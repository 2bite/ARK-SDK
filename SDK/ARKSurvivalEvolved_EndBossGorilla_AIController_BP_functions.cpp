// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossGorilla_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossGorilla_AIController_BP.EndBossGorilla_AIController_BP_C.UserConstructionScript
// ()

void AEndBossGorilla_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_AIController_BP.EndBossGorilla_AIController_BP_C.UserConstructionScript");

	AEndBossGorilla_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_AIController_BP.EndBossGorilla_AIController_BP_C.ExecuteUbergraph_EndBossGorilla_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossGorilla_AIController_BP_C::ExecuteUbergraph_EndBossGorilla_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_AIController_BP.EndBossGorilla_AIController_BP_C.ExecuteUbergraph_EndBossGorilla_AIController_BP");

	AEndBossGorilla_AIController_BP_C_ExecuteUbergraph_EndBossGorilla_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
