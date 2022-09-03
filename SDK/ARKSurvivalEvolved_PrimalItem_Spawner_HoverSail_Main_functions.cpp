// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_HoverSail_Main_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPInitIconMaterial
// ()

void UPrimalItem_Spawner_HoverSail_Main_C::BPInitIconMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPInitIconMaterial");

	UPrimalItem_Spawner_HoverSail_Main_C_BPInitIconMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BlueprintUsed
// ()

void UPrimalItem_Spawner_HoverSail_Main_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BlueprintUsed");

	UPrimalItem_Spawner_HoverSail_Main_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.OnDinoSpawned
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalDinoCharacter**   NewDino                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_HoverSail_Main_C::STATIC_OnDinoSpawned(class APrimalDinoCharacter** NewDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.OnDinoSpawned");

	UPrimalItem_Spawner_HoverSail_Main_C_OnDinoSpawned_Params params;
	params.NewDino = NewDino;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPGetCustomInventoryWidgetText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_Spawner_HoverSail_Main_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPGetCustomInventoryWidgetText");

	UPrimalItem_Spawner_HoverSail_Main_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_HoverSail_Main_C::ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main");

	UPrimalItem_Spawner_HoverSail_Main_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
