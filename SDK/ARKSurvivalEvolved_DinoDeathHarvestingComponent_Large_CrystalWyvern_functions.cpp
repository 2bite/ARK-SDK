// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Large_CrystalWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.CheckCorpseDissolve
// ()

void UDinoDeathHarvestingComponent_Large_CrystalWyvern_C::CheckCorpseDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.CheckCorpseDissolve");

	UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_CheckCorpseDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.BPCustomHarvestResource
// ()
// Parameters:
// class UPrimalInventoryComponent** invComp                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumToGive                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ToActor                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDinoDeathHarvestingComponent_Large_CrystalWyvern_C::BPCustomHarvestResource(class UPrimalInventoryComponent** invComp, int* NumToGive, class UClass** DamageTypeClass, class AActor** ToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.BPCustomHarvestResource");

	UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_BPCustomHarvestResource_Params params;
	params.invComp = invComp;
	params.NumToGive = NumToGive;
	params.DamageTypeClass = DamageTypeClass;
	params.ToActor = ToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Large_CrystalWyvern_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern");

	UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
