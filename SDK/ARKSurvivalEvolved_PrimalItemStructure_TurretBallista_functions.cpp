// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TurretBallista_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TurretBallista.PrimalItemStructure_TurretBallista_C.ExecuteUbergraph_PrimalItemStructure_TurretBallista
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TurretBallista_C::ExecuteUbergraph_PrimalItemStructure_TurretBallista(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TurretBallista.PrimalItemStructure_TurretBallista_C.ExecuteUbergraph_PrimalItemStructure_TurretBallista");

	UPrimalItemStructure_TurretBallista_C_ExecuteUbergraph_PrimalItemStructure_TurretBallista_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
