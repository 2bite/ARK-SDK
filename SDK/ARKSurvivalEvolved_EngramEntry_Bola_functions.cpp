// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Bola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Bola.EngramEntry_Bola_C.ExecuteUbergraph_EngramEntry_Bola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Bola_C::ExecuteUbergraph_EngramEntry_Bola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Bola.EngramEntry_Bola_C.ExecuteUbergraph_EngramEntry_Bola");

	UEngramEntry_Bola_C_ExecuteUbergraph_EngramEntry_Bola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
