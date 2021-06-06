// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CactusHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
// ()
// Parameters:
// class UPrimalInventoryComponent** invComp                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumToGive                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ToActor                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCactusHarvestComponent_C::BPCustomHarvestResource(class UPrimalInventoryComponent** invComp, int* NumToGive, class UClass** DamageTypeClass, class AActor** ToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource");

	UCactusHarvestComponent_C_BPCustomHarvestResource_Params params;
	params.invComp = invComp;
	params.NumToGive = NumToGive;
	params.DamageTypeClass = DamageTypeClass;
	params.ToActor = ToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CactusHarvestComponent.CactusHarvestComponent_C.ExecuteUbergraph_CactusHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCactusHarvestComponent_C::ExecuteUbergraph_CactusHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CactusHarvestComponent.CactusHarvestComponent_C.ExecuteUbergraph_CactusHarvestComponent");

	UCactusHarvestComponent_C_ExecuteUbergraph_CactusHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
