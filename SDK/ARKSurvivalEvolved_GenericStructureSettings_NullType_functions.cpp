// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GenericStructureSettings_NullType_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericStructureSettings_NullType.GenericStructureSettings_NullType_C.ExecuteUbergraph_GenericStructureSettings_NullType
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericStructureSettings_NullType_C::ExecuteUbergraph_GenericStructureSettings_NullType(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericStructureSettings_NullType.GenericStructureSettings_NullType_C.ExecuteUbergraph_GenericStructureSettings_NullType");

	UGenericStructureSettings_NullType_C_ExecuteUbergraph_GenericStructureSettings_NullType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
