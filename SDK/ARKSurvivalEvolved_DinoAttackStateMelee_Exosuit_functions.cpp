// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Exosuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.BPGetSocketLocation
// (Exec, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Exosuit_C::BPGetSocketLocation(struct FName* SocketName, struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.BPGetSocketLocation");

	UDinoAttackStateMelee_Exosuit_C_BPGetSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Exosuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Exosuit_C::ExecuteUbergraph_DinoAttackStateMelee_Exosuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Exosuit");

	UDinoAttackStateMelee_Exosuit_C_ExecuteUbergraph_DinoAttackStateMelee_Exosuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
