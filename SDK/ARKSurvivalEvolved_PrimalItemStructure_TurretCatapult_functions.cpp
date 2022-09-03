// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TurretCatapult_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TurretCatapult.PrimalItemStructure_TurretCatapult_C.ExecuteUbergraph_PrimalItemStructure_TurretCatapult
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TurretCatapult_C::ExecuteUbergraph_PrimalItemStructure_TurretCatapult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TurretCatapult.PrimalItemStructure_TurretCatapult_C.ExecuteUbergraph_PrimalItemStructure_TurretCatapult");

	UPrimalItemStructure_TurretCatapult_C_ExecuteUbergraph_PrimalItemStructure_TurretCatapult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
