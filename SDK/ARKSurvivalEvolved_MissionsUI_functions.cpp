// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionsUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionsUI.MissionsUI_C.ExecuteUbergraph_MissionsUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionsUI_C::ExecuteUbergraph_MissionsUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionsUI.MissionsUI_C.ExecuteUbergraph_MissionsUI");

	UMissionsUI_C_ExecuteUbergraph_MissionsUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
