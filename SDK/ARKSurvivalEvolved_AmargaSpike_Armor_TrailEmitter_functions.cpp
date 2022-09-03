// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Armor_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.UserConstructionScript
// ()

void AAmargaSpike_Armor_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.UserConstructionScript");

	AAmargaSpike_Armor_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_Armor_TrailEmitter_C::ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter");

	AAmargaSpike_Armor_TrailEmitter_C_ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
