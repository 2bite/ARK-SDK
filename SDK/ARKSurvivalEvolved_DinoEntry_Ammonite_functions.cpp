// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Ammonite_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Ammonite.DinoEntry_Ammonite_C.ExecuteUbergraph_DinoEntry_Ammonite
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Ammonite_C::ExecuteUbergraph_DinoEntry_Ammonite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Ammonite.DinoEntry_Ammonite_C.ExecuteUbergraph_DinoEntry_Ammonite");

	UDinoEntry_Ammonite_C_ExecuteUbergraph_DinoEntry_Ammonite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
