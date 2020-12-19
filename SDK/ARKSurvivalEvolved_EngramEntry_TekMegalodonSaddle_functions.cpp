// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekMegalodonSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekMegalodonSaddle.EngramEntry_TekMegalodonSaddle_C.ExecuteUbergraph_EngramEntry_TekMegalodonSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekMegalodonSaddle_C::ExecuteUbergraph_EngramEntry_TekMegalodonSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekMegalodonSaddle.EngramEntry_TekMegalodonSaddle_C.ExecuteUbergraph_EngramEntry_TekMegalodonSaddle");

	UEngramEntry_TekMegalodonSaddle_C_ExecuteUbergraph_EngramEntry_TekMegalodonSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
