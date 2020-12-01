// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GeneralStringsContainer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GeneralStringsContainer.GeneralStringsContainer_C.ExecuteUbergraph_GeneralStringsContainer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeneralStringsContainer_C::ExecuteUbergraph_GeneralStringsContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralStringsContainer.GeneralStringsContainer_C.ExecuteUbergraph_GeneralStringsContainer");

	UGeneralStringsContainer_C_ExecuteUbergraph_GeneralStringsContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
