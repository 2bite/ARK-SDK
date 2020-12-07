// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_FlameArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_FlameArrow.EngramEntry_FlameArrow_C.ExecuteUbergraph_EngramEntry_FlameArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_FlameArrow_C::ExecuteUbergraph_EngramEntry_FlameArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_FlameArrow.EngramEntry_FlameArrow_C.ExecuteUbergraph_EngramEntry_FlameArrow");

	UEngramEntry_FlameArrow_C_ExecuteUbergraph_EngramEntry_FlameArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
