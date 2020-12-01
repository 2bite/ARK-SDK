// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_BoaEggsOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_BoaEggsOnly.DinoSettings_BoaEggsOnly_C.ExecuteUbergraph_DinoSettings_BoaEggsOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_BoaEggsOnly_C::ExecuteUbergraph_DinoSettings_BoaEggsOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_BoaEggsOnly.DinoSettings_BoaEggsOnly_C.ExecuteUbergraph_DinoSettings_BoaEggsOnly");

	UDinoSettings_BoaEggsOnly_C_ExecuteUbergraph_DinoSettings_BoaEggsOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
