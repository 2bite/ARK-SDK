// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_IceBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_IceBox.PrimalItemStructure_IceBox_C.ExecuteUbergraph_PrimalItemStructure_IceBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_IceBox_C::ExecuteUbergraph_PrimalItemStructure_IceBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_IceBox.PrimalItemStructure_IceBox_C.ExecuteUbergraph_PrimalItemStructure_IceBox");

	UPrimalItemStructure_IceBox_C_ExecuteUbergraph_PrimalItemStructure_IceBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
