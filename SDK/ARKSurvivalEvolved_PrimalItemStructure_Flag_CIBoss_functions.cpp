// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_CIBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_CIBoss.PrimalItemStructure_Flag_CIBoss_C.ExecuteUbergraph_PrimalItemStructure_Flag_CIBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_CIBoss_C::ExecuteUbergraph_PrimalItemStructure_Flag_CIBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_CIBoss.PrimalItemStructure_Flag_CIBoss_C.ExecuteUbergraph_PrimalItemStructure_Flag_CIBoss");

	UPrimalItemStructure_Flag_CIBoss_C_ExecuteUbergraph_PrimalItemStructure_Flag_CIBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
