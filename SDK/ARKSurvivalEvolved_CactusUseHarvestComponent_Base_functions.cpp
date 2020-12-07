// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CactusUseHarvestComponent_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C.BPCustomHarvestResource
// ()
// Parameters:
// class UPrimalInventoryComponent** invComp                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumToGive                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ToActor                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCactusUseHarvestComponent_Base_C::BPCustomHarvestResource(class UPrimalInventoryComponent** invComp, int* NumToGive, class UClass** DamageTypeClass, class AActor** ToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C.BPCustomHarvestResource");

	UCactusUseHarvestComponent_Base_C_BPCustomHarvestResource_Params params;
	params.invComp = invComp;
	params.NumToGive = NumToGive;
	params.DamageTypeClass = DamageTypeClass;
	params.ToActor = ToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C.ExecuteUbergraph_CactusUseHarvestComponent_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCactusUseHarvestComponent_Base_C::ExecuteUbergraph_CactusUseHarvestComponent_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C.ExecuteUbergraph_CactusUseHarvestComponent_Base");

	UCactusUseHarvestComponent_Base_C_ExecuteUbergraph_CactusUseHarvestComponent_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
