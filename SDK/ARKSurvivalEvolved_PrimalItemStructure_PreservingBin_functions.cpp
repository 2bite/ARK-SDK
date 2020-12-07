// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PreservingBin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PreservingBin.PrimalItemStructure_PreservingBin_C.ExecuteUbergraph_PrimalItemStructure_PreservingBin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PreservingBin_C::ExecuteUbergraph_PrimalItemStructure_PreservingBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PreservingBin.PrimalItemStructure_PreservingBin_C.ExecuteUbergraph_PrimalItemStructure_PreservingBin");

	UPrimalItemStructure_PreservingBin_C_ExecuteUbergraph_PrimalItemStructure_PreservingBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
