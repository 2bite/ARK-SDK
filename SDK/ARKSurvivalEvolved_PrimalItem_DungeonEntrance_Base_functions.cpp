// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPCrafted
// ()

void UPrimalItem_DungeonEntrance_Base_C::BPCrafted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPCrafted");

	UPrimalItem_DungeonEntrance_Base_C_BPCrafted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPAllowCrafting
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_DungeonEntrance_Base_C::BPAllowCrafting(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPAllowCrafting");

	UPrimalItem_DungeonEntrance_Base_C_BPAllowCrafting_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.ExecuteUbergraph_PrimalItem_DungeonEntrance_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DungeonEntrance_Base_C::ExecuteUbergraph_PrimalItem_DungeonEntrance_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.ExecuteUbergraph_PrimalItem_DungeonEntrance_Base");

	UPrimalItem_DungeonEntrance_Base_C_ExecuteUbergraph_PrimalItem_DungeonEntrance_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
