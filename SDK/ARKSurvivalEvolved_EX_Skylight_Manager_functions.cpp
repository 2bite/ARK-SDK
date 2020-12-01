// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Skylight_Manager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_Skylight_Manager.EX_Skylight_Manager_C.UserConstructionScript
// ()

void AEX_Skylight_Manager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Skylight_Manager.EX_Skylight_Manager_C.UserConstructionScript");

	AEX_Skylight_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Skylight_Manager.EX_Skylight_Manager_C.UpdateSkylight
// ()

void AEX_Skylight_Manager_C::UpdateSkylight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Skylight_Manager.EX_Skylight_Manager_C.UpdateSkylight");

	AEX_Skylight_Manager_C_UpdateSkylight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Skylight_Manager.EX_Skylight_Manager_C.ReceiveBeginPlay
// ()

void AEX_Skylight_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Skylight_Manager.EX_Skylight_Manager_C.ReceiveBeginPlay");

	AEX_Skylight_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Skylight_Manager.EX_Skylight_Manager_C.BiomeSwitch
// ()
// Parameters:
// TEnumAsByte<EBiomeType_Enum>   Biome                          (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Skylight_Manager_C::BiomeSwitch(TEnumAsByte<EBiomeType_Enum> Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Skylight_Manager.EX_Skylight_Manager_C.BiomeSwitch");

	AEX_Skylight_Manager_C_BiomeSwitch_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Skylight_Manager.EX_Skylight_Manager_C.ExecuteUbergraph_EX_Skylight_Manager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Skylight_Manager_C::ExecuteUbergraph_EX_Skylight_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Skylight_Manager.EX_Skylight_Manager_C.ExecuteUbergraph_EX_Skylight_Manager");

	AEX_Skylight_Manager_C_ExecuteUbergraph_EX_Skylight_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
