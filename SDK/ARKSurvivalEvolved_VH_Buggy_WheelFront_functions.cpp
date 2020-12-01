// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_Buggy_WheelFront_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VH_Buggy_WheelFront.VH_Buggy_WheelFront_C.ExecuteUbergraph_VH_Buggy_WheelFront
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVH_Buggy_WheelFront_C::ExecuteUbergraph_VH_Buggy_WheelFront(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy_WheelFront.VH_Buggy_WheelFront_C.ExecuteUbergraph_VH_Buggy_WheelFront");

	UVH_Buggy_WheelFront_C_ExecuteUbergraph_VH_Buggy_WheelFront_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
