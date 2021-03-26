
#ifndef ERRORS_H_INCLUDED
#define ERRORS_H_INCLUDED

//-----------------------------------------------------------------

static const int REGISTER_BIT = 32;

//-----------------------------------------------------------------

#define FPRINTF_REG(file, enum_reg, string_reg) 	\
		case enum_reg:	fprintf(file, string_reg);	\
							break;					\

//-----------------------------------------------------------------

void CPU_dump(CPU_t* CPU);

//-----------------------------------------------------------------

#endif // ERRORS_H_INCLUDED