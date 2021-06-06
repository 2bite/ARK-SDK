// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeManagerUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTribeManagerUI_C::ExecuteUbergraph_TribeManagerUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI");

	UTribeManagerUI_C_ExecuteUbergraph_TribeManagerUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
