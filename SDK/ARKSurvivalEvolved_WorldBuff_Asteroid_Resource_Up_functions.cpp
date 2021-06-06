// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldBuff_Asteroid_Resource_Up_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PreDeconstruction
// (Native, Event, Static, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintPure, Const, NetValidate)

void UWorldBuff_Asteroid_Resource_Up_C::STATIC_PreDeconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PreDeconstruction");

	UWorldBuff_Asteroid_Resource_Up_C_PreDeconstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PostConstruction
// (Exec, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintPure, Const, NetValidate)

void UWorldBuff_Asteroid_Resource_Up_C::STATIC_PostConstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.PostConstruction");

	UWorldBuff_Asteroid_Resource_Up_C_PostConstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldBuff_Asteroid_Resource_Up_C::ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C.ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up");

	UWorldBuff_Asteroid_Resource_Up_C_ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
