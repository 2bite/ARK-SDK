// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ParaEnemyWarning_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.UserConstructionScript
// ()

void AParaEnemyWarning_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.UserConstructionScript");

	AParaEnemyWarning_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ReceiveBeginPlay
// ()

void AParaEnemyWarning_Emitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ReceiveBeginPlay");

	AParaEnemyWarning_Emitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ExecuteUbergraph_ParaEnemyWarning_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParaEnemyWarning_Emitter_C::ExecuteUbergraph_ParaEnemyWarning_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ExecuteUbergraph_ParaEnemyWarning_Emitter");

	AParaEnemyWarning_Emitter_C_ExecuteUbergraph_ParaEnemyWarning_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
