#DIR = proj
#DIR = first_try
DIR = second_try

all:
	cc main.c $(DIR)/ft_printf.c $(DIR)/ft_printf_formats.c $(DIR)/ft_printf_utils.c
	
#$(DIR)/ft_printf.c $(DIR)/ft_printf_formats.c $(DIR)/ft_printf_utils.c