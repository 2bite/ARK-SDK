// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AdminManagement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdminManagement.AdminManagement_C.ExecuteUbergraph_AdminManagement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAdminManagement_C::ExecuteUbergraph_AdminManagement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdminManagement.AdminManagement_C.ExecuteUbergraph_AdminManagement");

	UAdminManagement_C_ExecuteUbergraph_AdminManagement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
