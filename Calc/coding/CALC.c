#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_register.h"
#include "KPD_config.h"
#include "KPD_interface.h"
#include "LCD_config.h"
#include "LCD_interface.h"
#include "LCD_private.h"

#define CLEAR  'C'
#define EQUAL  '='

void Calculator(void);

int main(void)
{
	LCD_voidInit();
	KPD_voidInit();

	while(1)
	{
		Calculator();
	}

	return 0;
}

void Calculator(void)
{
	u8 keyPressed;
	u8 operand1 = 0, operand2 = 0;
	u8 operation = '\0';
	u16 result = 0;

	while(1)
	{
		KPD_voidGetValue(&keyPressed);

		if (keyPressed == KPD_NOT_PRESSED)
		{
			continue;
		}

		if (keyPressed >= '0' && keyPressed <= '9')
		{
			if (operation == '\0')
			{
				operand1 = operand1 * 10 + (keyPressed - '0');
				LCD_voidDisplayChar(keyPressed);
			}
			else
			{
				operand2 = operand2 * 10 + (keyPressed - '0');
				LCD_voidDisplayChar(keyPressed);
			}
		}
		else if (keyPressed == '+' || keyPressed == '-' || keyPressed == '*' || keyPressed == '/')
		{
			operation = keyPressed;
			LCD_voidDisplayChar(keyPressed);
		}
		else if (keyPressed == EQUAL)
		{
			switch (operation)
			{
				case '+':
				result = operand1 + operand2;
				break;
				case '-':
				result = operand1 - operand2;
				break;
				case '*':
				result = operand1 * operand2;
				break;
				case '/':
				if (operand2 != 0)
				{
					result = operand1 / operand2;
				}
				else
				{
					LCD_voidDisplayString("Error");
					return;
				}
				break;
				default:
				break;
			}

			LCD_voidDisplayChar('=');
			LCD_voidDisplayNumber(result);

			operand1 = 0;
			operand2 = 0;
			operation = '\0';

			return;
		}
		else if (keyPressed == CLEAR)
		{
			LCD_voidClear();
			operand1 = 0;
			operand2 = 0;
			operation = '\0';
		}
	}
}
