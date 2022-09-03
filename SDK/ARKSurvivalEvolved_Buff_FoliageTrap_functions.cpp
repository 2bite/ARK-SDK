// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FoliageTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.GetTrapCooldownAtLocation
// ()
// Parameters:
// struct FVector                 AtLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// double                         CooldownAtLocation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LocationIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FoliageTrap_C::GetTrapCooldownAtLocation(const struct FVector& AtLocation, double* CooldownAtLocation, int* LocationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.GetTrapCooldownAtLocation");

	ABuff_FoliageTrap_C_GetTrapCooldownAtLocation_Params params;
	params.AtLocation = AtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CooldownAtLocation != nullptr)
		*CooldownAtLocation = params.CooldownAtLocation;
	if (LocationIndex != nullptr)
		*LocationIndex = params.LocationIndex;
}


// Function Buff_FoliageTrap.Buff_FoliageTrap_C.CullCooldowns
// ()

void ABuff_FoliageTrap_C::CullCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.CullCooldowns");

	ABuff_FoliageTrap_C_CullCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FoliageTrap.Buff_FoliageTrap_C.ReceiveBeginPlay
// ()

void ABuff_FoliageTrap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.ReceiveBeginPlay");

	ABuff_FoliageTrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FoliageTrap.Buff_FoliageTrap_C.CheckFoliageForTrap
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UClass*                  HarvestComponentClass          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtLoc                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TheInstigatorLoc               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABuff_FoliageTrap_C::STATIC_CheckFoliageForTrap(class UClass* HarvestComponentClass, struct FVector* AtLoc, struct FVector* TheInstigatorLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.CheckFoliageForTrap");

	ABuff_FoliageTrap_C_CheckFoliageForTrap_Params params;
	params.HarvestComponentClass = HarvestComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AtLoc != nullptr)
		*AtLoc = params.AtLoc;
	if (TheInstigatorLoc != nullptr)
		*TheInstigatorLoc = params.TheInstigatorLoc;
}


// Function Buff_FoliageTrap.Buff_FoliageTrap_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FoliageTrap_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.BuffTickServer");

	ABuff_FoliageTrap_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FoliageTrap.Buff_FoliageTrap_C.UserConstructionScript
// ()

void ABuff_FoliageTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.UserConstructionScript");

	ABuff_FoliageTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FoliageTrap.Buff_FoliageTrap_C.MultiPlayPoisonMushroomSound
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FoliageTrap_C::MultiPlayPoisonMushroomSound(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.MultiPlayPoisonMushroomSound");

	ABuff_FoliageTrap_C_MultiPlayPoisonMushroomSound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FoliageTrap.Buff_FoliageTrap_C.ExecuteUbergraph_Buff_FoliageTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FoliageTrap_C::ExecuteUbergraph_Buff_FoliageTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap.Buff_FoliageTrap_C.ExecuteUbergraph_Buff_FoliageTrap");

	ABuff_FoliageTrap_C_ExecuteUbergraph_Buff_FoliageTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
