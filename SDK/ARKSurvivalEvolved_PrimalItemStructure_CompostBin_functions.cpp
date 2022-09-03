// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_CompostBin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_CompostBin.PrimalItemStructure_CompostBin_C.ExecuteUbergraph_PrimalItemStructure_CompostBin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_CompostBin_C::ExecuteUbergraph_PrimalItemStructure_CompostBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_CompostBin.PrimalItemStructure_CompostBin_C.ExecuteUbergraph_PrimalItemStructure_CompostBin");

	UPrimalItemStructure_CompostBin_C_ExecuteUbergraph_PrimalItemStructure_CompostBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
