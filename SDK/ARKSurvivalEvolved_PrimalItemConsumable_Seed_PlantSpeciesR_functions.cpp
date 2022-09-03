// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_PlantSpeciesR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.BPDrawItemIcon
// ()
// Parameters:
// class UCanvas**                ItemCanvas                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ItemCanvasSize                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               ItemCanvasScale                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bItemEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TheTintColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPrimalItemConsumable_Seed_PlantSpeciesR_C::BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.BPDrawItemIcon");

	UPrimalItemConsumable_Seed_PlantSpeciesR_C_BPDrawItemIcon_Params params;
	params.ItemCanvas = ItemCanvas;
	params.bItemEnabled = bItemEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCanvasSize != nullptr)
		*ItemCanvasSize = params.ItemCanvasSize;
	if (ItemCanvasScale != nullptr)
		*ItemCanvasScale = params.ItemCanvasScale;
	if (TheTintColor != nullptr)
		*TheTintColor = params.TheTintColor;
}


// Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_PlantSpeciesR_C::ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR");

	UPrimalItemConsumable_Seed_PlantSpeciesR_C_ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
