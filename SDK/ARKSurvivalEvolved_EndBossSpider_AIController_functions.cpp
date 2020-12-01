// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossSpider_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossSpider_AIController.EndBossSpider_AIController_C.UserConstructionScript
// ()

void AEndBossSpider_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpider_AIController.EndBossSpider_AIController_C.UserConstructionScript");

	AEndBossSpider_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossSpider_AIController.EndBossSpider_AIController_C.ExecuteUbergraph_EndBossSpider_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossSpider_AIController_C::ExecuteUbergraph_EndBossSpider_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossSpider_AIController.EndBossSpider_AIController_C.ExecuteUbergraph_EndBossSpider_AIController");

	AEndBossSpider_AIController_C_ExecuteUbergraph_EndBossSpider_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
