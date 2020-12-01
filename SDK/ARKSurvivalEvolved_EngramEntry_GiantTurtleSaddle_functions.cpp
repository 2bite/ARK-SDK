// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GiantTurtleSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GiantTurtleSaddle.EngramEntry_GiantTurtleSaddle_C.ExecuteUbergraph_EngramEntry_GiantTurtleSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GiantTurtleSaddle_C::ExecuteUbergraph_EngramEntry_GiantTurtleSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GiantTurtleSaddle.EngramEntry_GiantTurtleSaddle_C.ExecuteUbergraph_EngramEntry_GiantTurtleSaddle");

	UEngramEntry_GiantTurtleSaddle_C_ExecuteUbergraph_EngramEntry_GiantTurtleSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
