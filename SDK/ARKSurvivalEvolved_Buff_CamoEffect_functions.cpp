// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CamoEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CamoEffect.Buff_CamoEffect_C.Add Immune Actor
// ()
// Parameters:
// class AActor*                  Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CamoEffect_C::Add_Immune_Actor(class AActor* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CamoEffect.Buff_CamoEffect_C.Add Immune Actor");

	ABuff_CamoEffect_C_Add_Immune_Actor_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CamoEffect.Buff_CamoEffect_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_CamoEffect_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CamoEffect.Buff_CamoEffect_C.PreventActorTargeting");

	ABuff_CamoEffect_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CamoEffect.Buff_CamoEffect_C.UserConstructionScript
// ()

void ABuff_CamoEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CamoEffect.Buff_CamoEffect_C.UserConstructionScript");

	ABuff_CamoEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CamoEffect.Buff_CamoEffect_C.ExecuteUbergraph_Buff_CamoEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CamoEffect_C::ExecuteUbergraph_Buff_CamoEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CamoEffect.Buff_CamoEffect_C.ExecuteUbergraph_Buff_CamoEffect");

	ABuff_CamoEffect_C_ExecuteUbergraph_Buff_CamoEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
