// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_BallistaArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_BallistaArrow.EngramEntry_BallistaArrow_C.ExecuteUbergraph_EngramEntry_BallistaArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_BallistaArrow_C::ExecuteUbergraph_EngramEntry_BallistaArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_BallistaArrow.EngramEntry_BallistaArrow_C.ExecuteUbergraph_EngramEntry_BallistaArrow");

	UEngramEntry_BallistaArrow_C_ExecuteUbergraph_EngramEntry_BallistaArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
