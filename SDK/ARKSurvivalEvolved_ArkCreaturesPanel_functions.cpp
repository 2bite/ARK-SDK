// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArkCreaturesPanel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArkCreaturesPanel.ArkCreaturesPanel_C.ExecuteUbergraph_ArkCreaturesPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UArkCreaturesPanel_C::ExecuteUbergraph_ArkCreaturesPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArkCreaturesPanel.ArkCreaturesPanel_C.ExecuteUbergraph_ArkCreaturesPanel");

	UArkCreaturesPanel_C_ExecuteUbergraph_ArkCreaturesPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
