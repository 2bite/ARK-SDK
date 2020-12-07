// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TutorialUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialUI.TutorialUI_C.ExecuteUbergraph_TutorialUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTutorialUI_C::ExecuteUbergraph_TutorialUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialUI.TutorialUI_C.ExecuteUbergraph_TutorialUI");

	UTutorialUI_C_ExecuteUbergraph_TutorialUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
