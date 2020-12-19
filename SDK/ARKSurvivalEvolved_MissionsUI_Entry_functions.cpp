// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionsUI_Entry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionsUI_Entry.MissionsUI_Entry_C.ExecuteUbergraph_MissionsUI_Entry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionsUI_Entry_C::ExecuteUbergraph_MissionsUI_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionsUI_Entry.MissionsUI_Entry_C.ExecuteUbergraph_MissionsUI_Entry");

	UMissionsUI_Entry_C_ExecuteUbergraph_MissionsUI_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
