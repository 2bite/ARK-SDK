// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_IndustrialForge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_IndustrialForge.PrimalItemStructure_IndustrialForge_C.ExecuteUbergraph_PrimalItemStructure_IndustrialForge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_IndustrialForge_C::ExecuteUbergraph_PrimalItemStructure_IndustrialForge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_IndustrialForge.PrimalItemStructure_IndustrialForge_C.ExecuteUbergraph_PrimalItemStructure_IndustrialForge");

	UPrimalItemStructure_IndustrialForge_C_ExecuteUbergraph_PrimalItemStructure_IndustrialForge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
