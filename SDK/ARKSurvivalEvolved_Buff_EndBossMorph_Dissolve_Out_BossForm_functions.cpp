// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_Out_BossForm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_Out_BossForm_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.BPDeactivated");

	ABuff_EndBossMorph_Dissolve_Out_BossForm_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.UserConstructionScript
// ()

void ABuff_EndBossMorph_Dissolve_Out_BossForm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.UserConstructionScript");

	ABuff_EndBossMorph_Dissolve_Out_BossForm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.ReceiveBeginPlay
// ()

void ABuff_EndBossMorph_Dissolve_Out_BossForm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.ReceiveBeginPlay");

	ABuff_EndBossMorph_Dissolve_Out_BossForm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve_Out_BossForm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_Out_BossForm_C::ExecuteUbergraph_Buff_EndBossMorph_Dissolve_Out_BossForm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_Out_BossForm.Buff_EndBossMorph_Dissolve_Out_BossForm_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve_Out_BossForm");

	ABuff_EndBossMorph_Dissolve_Out_BossForm_C_ExecuteUbergraph_Buff_EndBossMorph_Dissolve_Out_BossForm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
