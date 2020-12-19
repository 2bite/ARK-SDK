// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_Buggy_WheelBack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VH_Buggy_WheelBack.VH_Buggy_WheelBack_C.ExecuteUbergraph_VH_Buggy_WheelBack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVH_Buggy_WheelBack_C::ExecuteUbergraph_VH_Buggy_WheelBack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy_WheelBack.VH_Buggy_WheelBack_C.ExecuteUbergraph_VH_Buggy_WheelBack");

	UVH_Buggy_WheelBack_C_ExecuteUbergraph_VH_Buggy_WheelBack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
