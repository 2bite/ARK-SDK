// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Bed_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Bed_Base.PrimalItemStructure_Bed_Base_C.ExecuteUbergraph_PrimalItemStructure_Bed_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Bed_Base_C::ExecuteUbergraph_PrimalItemStructure_Bed_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Bed_Base.PrimalItemStructure_Bed_Base_C.ExecuteUbergraph_PrimalItemStructure_Bed_Base");

	UPrimalItemStructure_Bed_Base_C_ExecuteUbergraph_PrimalItemStructure_Bed_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
