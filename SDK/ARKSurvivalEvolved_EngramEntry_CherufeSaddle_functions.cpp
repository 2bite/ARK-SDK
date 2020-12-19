// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CherufeSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CherufeSaddle.EngramEntry_CherufeSaddle_C.ExecuteUbergraph_EngramEntry_CherufeSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CherufeSaddle_C::ExecuteUbergraph_EngramEntry_CherufeSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CherufeSaddle.EngramEntry_CherufeSaddle_C.ExecuteUbergraph_EngramEntry_CherufeSaddle");

	UEngramEntry_CherufeSaddle_C_ExecuteUbergraph_EngramEntry_CherufeSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
