// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_EelBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_EelBoss.PrimalItemStructure_Flag_EelBoss_C.ExecuteUbergraph_PrimalItemStructure_Flag_EelBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_EelBoss_C::ExecuteUbergraph_PrimalItemStructure_Flag_EelBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_EelBoss.PrimalItemStructure_Flag_EelBoss_C.ExecuteUbergraph_PrimalItemStructure_Flag_EelBoss");

	UPrimalItemStructure_Flag_EelBoss_C_ExecuteUbergraph_PrimalItemStructure_Flag_EelBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
