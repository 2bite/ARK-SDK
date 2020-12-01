// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_HW_Grave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_HW_Grave.PrimalItemStructure_HW_Grave_C.ExecuteUbergraph_PrimalItemStructure_HW_Grave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_HW_Grave_C::ExecuteUbergraph_PrimalItemStructure_HW_Grave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_HW_Grave.PrimalItemStructure_HW_Grave_C.ExecuteUbergraph_PrimalItemStructure_HW_Grave");

	UPrimalItemStructure_HW_Grave_C_ExecuteUbergraph_PrimalItemStructure_HW_Grave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
