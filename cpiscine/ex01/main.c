vvoid ft_print_alphabet(letter)

int main(ft_print_alphabet);
{
	ft_print_alphabet();
	return(0);
}oid	ft_print_alphabet(void)
	{
		char	letter;

		letter = 'a';
		while (letter <= 'z') 
		{
			write (1, &letter,1);
			alphabet++;
		}

