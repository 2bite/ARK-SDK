// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TurretPlant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TurretPlant.PrimalItemStructure_TurretPlant_C.ExecuteUbergraph_PrimalItemStructure_TurretPlant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TurretPlant_C::ExecuteUbergraph_PrimalItemStructure_TurretPlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TurretPlant.PrimalItemStructure_TurretPlant_C.ExecuteUbergraph_PrimalItemStructure_TurretPlant");

	UPrimalItemStructure_TurretPlant_C_ExecuteUbergraph_PrimalItemStructure_TurretPlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
