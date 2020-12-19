// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeLader_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeLader.PrimalItemStructure_AdobeLader_C.ExecuteUbergraph_PrimalItemStructure_AdobeLader
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeLader_C::ExecuteUbergraph_PrimalItemStructure_AdobeLader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeLader.PrimalItemStructure_AdobeLader_C.ExecuteUbergraph_PrimalItemStructure_AdobeLader");

	UPrimalItemStructure_AdobeLader_C_ExecuteUbergraph_PrimalItemStructure_AdobeLader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
