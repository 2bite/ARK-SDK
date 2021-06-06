// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Phiomia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Phiomia.DinoColorSet_Phiomia_C.ExecuteUbergraph_DinoColorSet_Phiomia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Phiomia_C::ExecuteUbergraph_DinoColorSet_Phiomia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Phiomia.DinoColorSet_Phiomia_C.ExecuteUbergraph_DinoColorSet_Phiomia");

	UDinoColorSet_Phiomia_C_ExecuteUbergraph_DinoColorSet_Phiomia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
