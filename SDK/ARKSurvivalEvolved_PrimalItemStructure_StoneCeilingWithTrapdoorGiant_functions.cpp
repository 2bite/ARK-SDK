// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneCeilingWithTrapdoorGiant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneCeilingWithTrapdoorGiant.PrimalItemStructure_StoneCeilingWithTrapdoorGiant_C.ExecuteUbergraph_PrimalItemStructure_StoneCeilingWithTrapdoorGiant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneCeilingWithTrapdoorGiant_C::ExecuteUbergraph_PrimalItemStructure_StoneCeilingWithTrapdoorGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneCeilingWithTrapdoorGiant.PrimalItemStructure_StoneCeilingWithTrapdoorGiant_C.ExecuteUbergraph_PrimalItemStructure_StoneCeilingWithTrapdoorGiant");

	UPrimalItemStructure_StoneCeilingWithTrapdoorGiant_C_ExecuteUbergraph_PrimalItemStructure_StoneCeilingWithTrapdoorGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
