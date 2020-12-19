// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TurretMinigun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TurretMinigun.PrimalItemStructure_TurretMinigun_C.ExecuteUbergraph_PrimalItemStructure_TurretMinigun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TurretMinigun_C::ExecuteUbergraph_PrimalItemStructure_TurretMinigun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TurretMinigun.PrimalItemStructure_TurretMinigun_C.ExecuteUbergraph_PrimalItemStructure_TurretMinigun");

	UPrimalItemStructure_TurretMinigun_C_ExecuteUbergraph_PrimalItemStructure_TurretMinigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
