// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TurretRocket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TurretRocket.PrimalItemStructure_TurretRocket_C.ExecuteUbergraph_PrimalItemStructure_TurretRocket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TurretRocket_C::ExecuteUbergraph_PrimalItemStructure_TurretRocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TurretRocket.PrimalItemStructure_TurretRocket_C.ExecuteUbergraph_PrimalItemStructure_TurretRocket");

	UPrimalItemStructure_TurretRocket_C_ExecuteUbergraph_PrimalItemStructure_TurretRocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
